//
//  OTPTableViewCell.h
//
//  Copyright 2013 Matt Rubin
//  Copyright 2011 Google Inc.
//
//  Licensed under the Apache License, Version 2.0 (the "License"); you may not
//  use this file except in compliance with the License.  You may obtain a copy
//  of the License at
//
//  http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
//  WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.  See the
//  License for the specific language governing permissions and limitations under
//  the License.
//

#import <UIKit/UIKit.h>

@class OTPAuthURL;
@class OTPTableViewCellBackView;

@interface OTPTableViewCell : UITableViewCell<UITextFieldDelegate>

@property (strong, nonatomic, readwrite) IBOutlet UILabel *frontCodeLabel;
@property (strong, nonatomic, readwrite) IBOutlet UILabel *frontWarningLabel;
@property (strong, nonatomic, readwrite) IBOutlet UILabel *backCheckLabel;
@property (strong, nonatomic, readwrite) IBOutlet UILabel *backIntegrityCheckLabel;
@property (strong, nonatomic, readwrite) IBOutlet UITextField *frontNameTextField;
@property (strong, nonatomic, readwrite) IBOutlet UIButton *frontRefreshButton;
@property (strong, nonatomic, readwrite) IBOutlet UIButton *frontInfoButton;
@property (strong, nonatomic, readwrite) IBOutlet UIView *frontView;
@property (strong, nonatomic, readwrite) IBOutlet OTPTableViewCellBackView *backView;

- (void)setAuthURL:(OTPAuthURL *)authURL;
- (void)willBeginEditing;
- (void)didEndEditing;
- (IBAction)showInfo:(id)sender;
- (IBAction)hideInfo:(id)sender;
- (IBAction)refreshAuthURL:(id)sender;
- (void)showCopyMenu:(CGPoint)location;

@end

@interface HOTPTableViewCell : OTPTableViewCell
@end

@interface TOTPTableViewCell : OTPTableViewCell
@end

@interface OTPTableViewCellBackView : UIView
@end

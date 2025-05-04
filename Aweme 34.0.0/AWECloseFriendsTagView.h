@interface AWECloseFriendsTagView : AWEVideoTypeTagView
- (void)configWithLabelText:icon:textColor:bgColor:updateBlock:;
- (void)configWithLabelText:icon:textColor:bgColor:iconSize:labelTextFontSize:updateBlock:;
- (void)configWithLabelText:icon:textColor:bgColor:;
+ (BOOL)isValidColorHexString:;
@end

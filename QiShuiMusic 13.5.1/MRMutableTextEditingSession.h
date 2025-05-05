@interface MRMutableTextEditingSession : MRTextEditingSession
@property (nonatomic) NSString text;
@property (nonatomic) BOOL editing;
@property (nonatomic) MRTextEditingAttributes attributes;
- (void)setText:;
- (void)setEditing:;
- (void)setAttributes:;
@end

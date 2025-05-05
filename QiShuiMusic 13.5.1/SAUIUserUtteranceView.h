@interface SAUIUserUtteranceView : SAAceView
@property (nonatomic) NSString text;
- (id)groupIdentifier;
- (void)setText:;
- (id)encodedClassName;
- (id)text;
+ (id)userUtteranceView;
+ (id)userUtteranceViewWithDictionary:context:;
@end

@interface AWEIMReportMessageComponent : AWEIMComponentBase
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentDidMounted:;
- (void)reportMessages:extraParams:;
+ (BOOL)canCreateComponentWithContext:;
@end

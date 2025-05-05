@interface UILinkConnectionActionResponse : BSActionResponse
@property (nonatomic) LNConnectionActionResponse actionResponse;
- (id)keyDescriptionForSetting:;
- (id)initWithActionResponse:;
- (id)actionResponse;
@end

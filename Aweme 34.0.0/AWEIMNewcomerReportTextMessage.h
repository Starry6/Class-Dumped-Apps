@interface AWEIMNewcomerReportTextMessage : AWEIMTextMessage
@property (nonatomic) Q newcomerReportType;
- (id)initWithContentDict:;
- (unsigned long long)newcomerReportType;
- (void)setNewcomerReportType:;
+ (Class)viewModelClass;
@end

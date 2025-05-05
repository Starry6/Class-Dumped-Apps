@interface PARAsyncCard : SFCard
@property (nonatomic) double scale;
@property (nonatomic) NSURL cardURL;
@property (nonatomic) Q clientQueryId;
- (void)setScale:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (double)scale;
- (unsigned long long)clientQueryId;
- (id)cardURL;
+ (BOOL)supportsSecureCoding;
+ (id)cardWithTitle:url:session:scale:queryId:;
+ (id)cardWithTitle:url:session:scale:queryId:clientQueryId:;
@end

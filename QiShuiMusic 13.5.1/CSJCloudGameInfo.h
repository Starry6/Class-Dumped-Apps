@interface CSJCloudGameInfo : NSObject
@property (nonatomic) NSString cloudGameUrl;
@property (nonatomic) q cloudGameType;
- (long long)cloudGameType;
- (id)cloudGameUrl;
- (id)convertToPlayableInfo;
- (void)setCloudGameType:;
- (void)setCloudGameUrl:;
- (void)setupDataWithDictionary:;
- (id)initWithDictionary:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (BOOL)isValid;
- (void).cxx_destruct;
@end

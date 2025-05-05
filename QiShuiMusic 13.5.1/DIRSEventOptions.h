@interface DIRSEventOptions : NSObject
@property (nonatomic) q category;
@property (nonatomic) q priority;
@property (nonatomic) NSString regionKey;
@property (nonatomic) q privacyLevel;
- (id)regionKey;
- (void)setRegionKey:;
- (void)setPriority:;
- (void)setPrivacyLevel:;
- (void)setCategory:;
- (void).cxx_destruct;
- (long long)privacyLevel;
- (long long)category;
- (long long)priority;
@end

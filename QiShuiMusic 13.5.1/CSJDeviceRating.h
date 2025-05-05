@interface CSJDeviceRating : NSObject
@property (nonatomic) double score;
@property (nonatomic) q byteBenchType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)byteBenchType;
- (id)dataProviderFunc:params:;
- (long long)instantRating;
- (void)loadFromLocalCache;
- (void)netRatingDidFinish:;
- (void)requestByteBeach:;
- (void)savaToLocalCache;
- (void)setByteBenchType:;
- (id)init;
- (double)score;
- (void)setScore:;
- (void)refresh:;
+ (void)refresh;
+ (id)sharedInstance;
@end

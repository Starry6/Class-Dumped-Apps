@interface AMSRatingSystem : NSObject
@property (nonatomic) NSString kind;
@property (nonatomic) NSString label;
@property (nonatomic) NSArray contentRatings;
@property (nonatomic) NSString ratingSystemID;
@property (nonatomic) NSArray types;
- (id)types;
- (id)initWithDictionary:;
- (id)kind;
- (id)label;
- (void).cxx_destruct;
- (id)description;
- (id)contentRatings;
- (id)ratingSystemID;
+ (id)ratingSystemWithDictionary:;
@end

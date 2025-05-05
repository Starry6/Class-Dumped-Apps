@interface AMSContentRating : NSObject
@property (nonatomic) NSString contentRatingID;
@property (nonatomic) NSURL imageURL;
@property (nonatomic) NSString kind;
@property (nonatomic) NSString label;
@property (nonatomic) NSString name;
@property (nonatomic) NSString ratingDescription;
@property (nonatomic) NSNumber value;
- (id)initWithDictionary:;
- (id)kind;
- (id)label;
- (void).cxx_destruct;
- (id)description;
- (id)value;
- (id)name;
- (id)imageURL;
- (id)ratingDescription;
- (id)contentRatingID;
+ (id)contentRatingWithDictionary:;
@end

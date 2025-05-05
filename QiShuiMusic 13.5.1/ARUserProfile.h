@interface ARUserProfile : NSObject
@property (nonatomic) NSString identifier;
@property (nonatomic) q type;
- (id)identifier;
- (long long)type;
- (id)initWithIdentifier:type:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
+ (id)defaultProfile;
@end

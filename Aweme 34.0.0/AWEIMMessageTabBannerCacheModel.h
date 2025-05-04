@interface AWEIMMessageTabBannerCacheModel : NSObject
@property (nonatomic) NSString identifier;
@property (nonatomic) NSObject model;
@property (nonatomic) NSString modelClassName;
- (void)setModelClassName:;
- (void)setModel:;
- (void)setIdentifier:;
- (void)encodeWithCoder:;
- (id)identifier;
- (id)model;
- (void).cxx_destruct;
- (id)initWithCoder:;
- (id)modelClassName;
@end

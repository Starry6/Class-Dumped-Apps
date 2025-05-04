@interface AWEVideoURLTransformer : NSObject
@property (nonatomic) NSMutableDictionary urlMap;
- (id)_customURLForOriginURL:;
- (id)_originURLForCustomURL:;
- (id)urlMap;
- (void)setUrlMap:;
- (id)init;
- (void).cxx_destruct;
+ (id)customURLForOriginURL:;
+ (id)originURLForCustomURL:;
+ (id)sharedInstance;
@end

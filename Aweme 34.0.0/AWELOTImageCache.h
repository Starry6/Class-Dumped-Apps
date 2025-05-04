@interface AWELOTImageCache : NSObject
@property (nonatomic) AWEStorage cache;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setCache:;
- (id)cache;
- (void).cxx_destruct;
- (id)imageForKey:;
- (void)setImage:forKey:;
+ (id)sharedInstance;
@end

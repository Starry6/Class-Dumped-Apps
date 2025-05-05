@interface CSJLOTImageCache : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)imageForKey:;
- (void)setImage:forKey:;
@end

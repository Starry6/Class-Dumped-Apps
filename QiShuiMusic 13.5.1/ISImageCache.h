@interface ISImageCache : NSObject
@property (nonatomic) {os_unfair_lock_s=I} lock;
@property (nonatomic) NSMutableDictionary imageBagsByDescriptor;
@property (nonatomic) NSData latestValidationToken;
- (id)init;
- (void)setImage:forDescriptor:;
- (id)latestValidationToken;
- (id)debugDescription;
- (id)lock;
- (void)setImageBagsByDescriptor:;
- (void).cxx_destruct;
- (id)imageForDescriptor:;
- (id)allImages;
- (id)imageBagsByDescriptor;
- (void)setLock:;
@end

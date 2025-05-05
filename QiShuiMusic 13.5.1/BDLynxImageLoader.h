@interface BDLynxImageLoader : NSObject
@property (nonatomic) NSString cardID;
@property (nonatomic) BDLynxBundle bundle;
@property (nonatomic) NSArray extURLPrefix;
@property (nonatomic) NSURL extDirRoot;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)canRequestURL:;
- (id)extDirRoot;
- (id)extURLPrefix;
- (id)initWithBundle:cardID:;
- (id)initWithTemplateConfig:;
- (void)requestImage:size:complete:;
- (void)setExtDirRoot:;
- (void)setExtURLPrefix:;
- (id)bundle;
- (void).cxx_destruct;
- (void)setBundle:;
- (id)cardID;
- (void)setCardID:;
@end

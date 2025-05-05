@interface BWInferenceSimpleTextureStorage : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)dealloc;
- (void)clear;
- (id)entryForRequirement:;
- (void)setEntry:forRequirement:;
- (void)setTexture:forRequirement:;
@end

@interface KVEmbeddedProfileReader : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)profileInfo;
- (void).cxx_destruct;
- (id)description;
- (BOOL)enumerateDatasetsWithError:usingBlock:;
- (id)initWithData:profile:profileInfo:;
@end

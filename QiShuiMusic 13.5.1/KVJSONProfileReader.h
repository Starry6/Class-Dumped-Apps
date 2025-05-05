@interface KVJSONProfileReader : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithData:error:;
- (id)profileInfo;
- (void).cxx_destruct;
- (id)description;
- (BOOL)enumerateDatasetsWithError:usingBlock:;
@end

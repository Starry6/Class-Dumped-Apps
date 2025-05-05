@interface KVStreamProfileReader : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)profileInfo;
- (void).cxx_destruct;
- (id)description;
- (BOOL)enumerateDatasetsWithError:usingBlock:;
- (id)initWithData:profileInfo:offset:;
@end

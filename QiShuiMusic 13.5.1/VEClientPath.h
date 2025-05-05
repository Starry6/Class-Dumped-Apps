@interface VEClientPath : NSObject
@property (nonatomic) NSMutableArray vertexeArray;
@property (nonatomic) NSValue timestamp;
- (void)setVertexeArray:;
- (id)toDicInfo;
- (id)vertexeArray;
- (void)setTimestamp:;
- (void).cxx_destruct;
- (id)timestamp;
+ (id)clientPathWithDic:;
@end

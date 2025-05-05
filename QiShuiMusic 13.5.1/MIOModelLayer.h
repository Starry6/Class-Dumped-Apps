@interface MIOModelLayer : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) NSString type;
- (id)initWithName:type:;
- (unsigned long long)hash;
- (id)type;
- (void).cxx_destruct;
- (id)description;
- (id)name;
- (BOOL)isEqual:;
- (id)initWithName:type:histogram:;
- (id)initWithMessageStream:error:;
- (id)layerHistogram;
@end

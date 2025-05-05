@interface MTLInferredInput : NSObject
@property (nonatomic) Q dataType;
@property (nonatomic) Q pixelFormat;
@property (nonatomic) Q aluType;
@property (nonatomic) Q offset;
@property (nonatomic) Q bufferIndex;
@property (nonatomic) Q stride;
@property (nonatomic) Q stepFunction;
@property (nonatomic) Q stepRate;
@property (nonatomic) BOOL baseInstanceUnused;
- (id)formattedDescription:;
- (unsigned long long)bufferIndex;
- (unsigned long long)stepRate;
- (unsigned long long)stride;
- (unsigned long long)dataType;
- (unsigned long long)offset;
- (unsigned long long)stepFunction;
- (unsigned long long)pixelFormat;
- (id)description;
- (unsigned long long)aluType;
- (id)initWithDataType:pixelFormat:aluType:offset:bufferIndex:stride:stepFunction:stepRate:baseInstanceUnused:;
- (BOOL)baseInstanceUnused;
@end

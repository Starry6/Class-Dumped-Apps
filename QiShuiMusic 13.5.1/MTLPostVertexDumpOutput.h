@interface MTLPostVertexDumpOutput : NSObject
@property (nonatomic) NSString airMDType;
@property (nonatomic) Q dataType;
@property (nonatomic) Q pixelFormat;
@property (nonatomic) Q aluType;
@property (nonatomic) NSString name;
@property (nonatomic) Q offset;
- (void)dealloc;
- (id)formattedDescription:;
- (unsigned long long)dataType;
- (unsigned long long)offset;
- (unsigned long long)pixelFormat;
- (id)description;
- (id)name;
- (unsigned long long)aluType;
- (id)initWithAirMDType:dataType:pixelFormat:aluType:name:offset:;
- (id)airMDType;
@end

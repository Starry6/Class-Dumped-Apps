@interface VIE5RunnerPortDesc : NSObject
@property (nonatomic) NSArray shape;
@property (nonatomic) Q type;
@property (nonatomic) (VIE5RunnerPortDType=QQ) dtype;
@property (nonatomic) Q csize;
@property (nonatomic) NSArray strides;
- (id)shape;
- (id)strides;
- (unsigned long long)type;
- (void).cxx_destruct;
- (id)initWithShape:type:dtype:csize:strides:;
- (id)dtype;
- (unsigned long long)csize;
@end

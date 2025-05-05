@interface ETVariable : NSObject
@property (nonatomic) ETModelDef model;
@property (nonatomic) Q kind;
@property (nonatomic) NSString name;
@property (nonatomic) NSString layerName;
@property (nonatomic) Q initializationMode;
@property (nonatomic) float initializationAlpha;
@property (nonatomic) float initializationBeta;
- (id)model;
- (void)setKind:;
- (void)setName:;
- (void)setModel:;
- (id)copyData;
- (unsigned long long)kind;
- (id)layerName;
- (void)updateWithData:;
- (void).cxx_destruct;
- (void)setLayerName:;
- (id)name;
- (id)initWithModelDef:;
- (id)getOpaqueCopy;
- (id)swapWithOpaqueCopy:;
- (unsigned long long)initializationMode;
- (void)setInitializationMode:;
- (float)initializationAlpha;
- (void)setInitializationAlpha:;
- (float)initializationBeta;
- (void)setInitializationBeta:;
@end

@interface CARDisplayInfo : NSObject
@property (nonatomic) NSString identifier;
@property (nonatomic) {CGSize=dd} physicalSize;
@property (nonatomic) {CGSize=dd} pixelSize;
@property (nonatomic) BOOL supportsCarPlayContent;
@property (nonatomic) BOOL supportsInstrumentClusterContent;
@property (nonatomic) BOOL supportsMapContent;
@property (nonatomic) NSArray oemPunchThroughs;
@property (nonatomic) NSArray streams;
- (id)pixelSize;
- (id)identifier;
- (id)physicalSize;
- (void).cxx_destruct;
- (id)description;
- (id)streams;
- (id)initWithPhysicalScreenDictionary:;
- (id)initWithLogicalScreenDictionary:;
- (void)updateStreams:;
- (id)originForScreenInfoIdentifier:;
- (void)_updateOEMViews:;
- (BOOL)supportsCarPlayContent;
- (BOOL)supportsInstrumentClusterContent;
- (BOOL)supportsMapContent;
- (id)oemPunchThroughs;
@end

@interface VKCTextDataDetectorElement : VKCBaseDataDetectorElement
@property (nonatomic) NSArray _children;
@property (nonatomic) CRDataDetectorsOutputRegion ddOutputRegion;
@property (nonatomic) Q dataDetectorTypes;
@property (nonatomic) BOOL childrenCreated;
@property (nonatomic) Q crDataType;
@property (nonatomic) {_NSRange=QQ} characterRange;
- (void)setDataDetectorTypes:;
- (unsigned long long)dataDetectorTypes;
- (id)children;
- (unsigned long long)dataType;
- (id)characterRange;
- (void).cxx_destruct;
- (id)_children;
- (id)boundingQuads;
- (id)scannerResult;
- (id)debugMenu;
- (BOOL)isTextDataDetector;
- (BOOL)isUnitConversionDataDetector;
- (void)createChildrenIfNecessary;
- (BOOL)childrenCreated;
- (void)setChildrenCreated:;
- (void)set_children:;
- (id)initWithCROutputRegion:parentDocument:;
- (id)initWithScannerResult:;
- (id)ddOutputRegion;
- (unsigned long long)crDataType;
+ (id)dataDetectorElementFromCROutputRegion:parentDocument:;
@end

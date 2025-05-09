@interface GEOLogMsgStateMapUI : PBCodable
@property (nonatomic) BOOL hasLayoutInfo;
@property (nonatomic) NSInteger layoutInfo;
@property (nonatomic) BOOL hasMultiTabsState;
@property (nonatomic) GEOMultiTabsState multiTabsState;
@property (nonatomic) BOOL hasLayoutStyle;
@property (nonatomic) NSInteger layoutStyle;
@property (nonatomic) BOOL hasLandscape;
@property (nonatomic) BOOL landscape;
@property (nonatomic) BOOL hasNumberOfMapsWindows;
@property (nonatomic) I numberOfMapsWindows;
@property (nonatomic) BOOL hasWindowSize;
@property (nonatomic) NSInteger windowSize;
- (int)StringAsWindowSize:;
- (id)windowSizeAsString:;
- (BOOL)hasWindowSize;
- (int)windowSize;
- (void)setWindowSize:;
- (BOOL)landscape;
- (void)readAll:;
- (BOOL)hasLandscape;
- (void)setLandscape:;
- (void)setHasWindowSize:;
- (void)setHasLandscape:;
- (void)setMultiTabsState:;
- (id)initWithJSON:;
- (int)layoutStyle;
- (id)jsonRepresentation;
- (id)multiTabsState;
- (unsigned int)numberOfMapsWindows;
- (void)setLayoutStyle:;
- (id)initWithDictionary:;
- (void)writeTo:;
- (id)layoutInfoAsString:;
- (int)StringAsLayoutInfo:;
- (void)setLayoutInfo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (int)layoutInfo;
- (void)setHasLayoutStyle:;
- (void)setHasNumberOfMapsWindows:;
- (void)mergeFrom:;
- (int)StringAsLayoutStyle:;
- (void)setNumberOfMapsWindows:;
- (BOOL)hasMultiTabsState;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)layoutStyleAsString:;
- (id)description;
- (BOOL)hasNumberOfMapsWindows;
- (id)dictionaryRepresentation;
- (void)setHasLayoutInfo:;
- (BOOL)hasLayoutStyle;
- (BOOL)hasLayoutInfo;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)isValid:;
@end

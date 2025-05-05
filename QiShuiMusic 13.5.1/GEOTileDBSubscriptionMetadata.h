@interface GEOTileDBSubscriptionMetadata : NSObject
@property (nonatomic) Q associatedDataCount;
@property (nonatomic) Q associatedDataSize;
- (void).cxx_destruct;
- (id)initWithDataCount:dataSize:dataStates:;
- (BOOL)isFullyLoadedForDataType:dataSubtype:version:;
- (unsigned long long)associatedDataCount;
- (unsigned long long)associatedDataSize;
@end

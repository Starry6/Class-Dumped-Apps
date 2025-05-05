@interface LTMExtractMetadata : NSObject
+ (BOOL)extractFrom:validBufferRect:isDigitalFlash:toDriverInput:ltmGeometry:;
+ (void)extractRectanglesFrom:validBufferRect:ltmGeometry:;
+ (BOOL)extractAWBMetadataFromMetadata:toDriverInput:;
+ (BOOL)getTileStatsRegion:toDriverInput:;
+ (BOOL)extractCCMFromMetadata:toDriverInput:;
+ (BOOL)extractFromRawMetadata:toDriverInput:;
+ (BOOL)extractAWBMetadataFromRawMetadata:toDriverInput:;
+ (void)compareAWBMetadata:withReference:;
+ (void)compareSpatialCCMWithMetadata:withMetadata:;
@end

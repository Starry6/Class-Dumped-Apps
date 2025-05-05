@interface VNCVPixelBufferConversionHelpers : NSObject
+ (id)dictionaryRepresentationClassesSet;
+ (id)createDictionaryRepresentationOfCVPixelBuffer:;
+ (id)createCVPixelBufferRefFromDictionaryRepresentation:;
+ (BOOL)isCVPixelBuffer:equalToCVPixelBuffer:;
+ (unsigned long long)computeHashForCVPixelBuffer:;
@end

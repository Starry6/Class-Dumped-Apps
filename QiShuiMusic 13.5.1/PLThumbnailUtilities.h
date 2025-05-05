@interface PLThumbnailUtilities : NSObject
+ (int)_bytesPerRowForSpecification:;
+ (int)_requiredDataLengthForSpecification:;
+ (id)_destinationDataFromSpecification:;
+ (id)_destinationDataArrayFromSpecifications:;
+ (BOOL)_validateSpecification:destinationData:;
+ (BOOL)_validateSpecifications:destinationData:;
+ (BOOL)performHWCascadingDownscaleTo5551OnIOSurface:withSpecifications:destinationData:usingContext:;
+ (BOOL)_performSWDownscaleTo5551OnSourceImage:withSourceDimensions:withSpecification:destinationData:imageRect:bytesPerRow:;
+ (BOOL)performSWDownscaleTo5551OnImage:withSpecification:destinationData:imageRect:bytesPerRow:;
+ (BOOL)performSWCascadingDownscaleTo5551OnImage:withSpecifications:destinationData:;
@end

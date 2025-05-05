@interface VNCoreEspressoUtils : NSObject
+ (id)tensorShapesForBlobNames:ofNetworkModelFileWithPath:error:;
+ (BOOL)getInputImageTensorDescriptor:forBlobName:pixelFormatType:outputTensorDescriptors:forBlobNamesWithTypes:fromNetworkModelFileWithPath:error:;
@end

@interface PLPTPConversionResult : NSObject
@property (nonatomic) BOOL requiresConversion;
@property (nonatomic) NSString pathExtension;
@property (nonatomic) Q estimatedFileLength;
@property (nonatomic) I inputVideoCodec;
@property (nonatomic) UTType inputContentType;
@property (nonatomic) I outputVideoCodec;
@property (nonatomic) UTType outputContentType;
- (id)pathExtension;
- (void).cxx_destruct;
- (id)description;
- (id)initWithRequiresConversion:pathExtension:estimatedFileLength:inputVideoCodec:inputContentType:outputVideoCodec:outputContentType:;
- (BOOL)requiresConversion;
- (unsigned long long)estimatedFileLength;
- (unsigned int)inputVideoCodec;
- (id)inputContentType;
- (unsigned int)outputVideoCodec;
- (id)outputContentType;
@end

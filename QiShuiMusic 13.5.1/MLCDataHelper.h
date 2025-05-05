@interface MLCDataHelper : NSObject
+ (id)createDataWithFloatValue:count:;
+ (void)fillData:withFloatValue:;
+ (BOOL)convertFp16toFp32:fp16Values:fp32Values:;
+ (BOOL)convertFp32toFp16:fp32Values:fp16Values:;
+ (void)copySource:toTarget:sourceOffset:targetOffset:sizeToCopy:;
+ (BOOL)convertOIHWtoIOHW:sourceOIHW:resultIOHW:inputFeatureChannelCount:outputFeatureChannelCount:;
+ (BOOL)convertSourceOIHW:toResultHWIO:width:height:inputFeatureChannelCount:outputFeatureChannelCount:dataType:;
+ (BOOL)convertSourceOIHW:toResultHWOI:width:height:inputFeatureChannelCount:outputFeatureChannelCount:dataType:;
+ (BOOL)convertSourceHWIO:toResultOIHW:width:height:inputFeatureChannelCount:outputFeatureChannelCount:dataType:;
+ (BOOL)convertSourceHWOI:toResultOIHW:width:height:inputFeatureChannelCount:outputFeatureChannelCount:dataType:;
@end

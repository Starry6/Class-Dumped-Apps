@interface BDTGDataUtils : NSObject
+ (void)appendSubjectItem:value:toData:;
+ (void)appendBITString:toData:;
+ (void)appendDERLength:toData:;
+ (void)appendUTF8String:toData:;
+ (void)encloseBySequenceTag:;
+ (void)encloseBySetTag:;
+ (void)encloseData:byTag:;
+ (void)prependByte:toData:;
@end

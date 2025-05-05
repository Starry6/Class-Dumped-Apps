@interface GPBEnumDescriptor : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) ^? enumVerifier;
@property (nonatomic) I enumNameCount;
- (unsigned int)enumNameCount;
- (id)getEnumNameForIndex:;
- (id)getEnumTextFormatNameForIndex:;
- (void)dealloc;
- (void)calcValueNameOffsets;
- (id)enumNameForValue:;
- (id)initWithName:valueNames:values:count:enumVerifier:;
- (id)textFormatNameForValue:;
- (id)name;
- (BOOL)getValue:forEnumName:;
- (id)enumVerifier;
- (BOOL)getValue:forEnumTextFormatName:;
+ (id)allocDescriptorForName:valueNames:values:count:enumVerifier:extraTextFormatInfo:;
+ (id)allocDescriptorForName:valueNames:values:count:enumVerifier:;
@end

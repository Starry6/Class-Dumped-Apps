@interface SASourceInfo : NSObject
@property (nonatomic) Q offsetIntoSegment;
@property (nonatomic) Q length;
@property (nonatomic) NSString filePath;
@property (nonatomic) NSString fileName;
@property (nonatomic) I lineNum;
@property (nonatomic) I columnNum;
@property (nonatomic) Q offsetIntoTextSegment;
- (id)filePath;
- (id)fileName;
- (unsigned long long)offsetIntoTextSegment;
- (unsigned long long)offsetIntoSegment;
- (id)debugDescription;
- (void).cxx_destruct;
- (unsigned long long)length;
- (unsigned int)lineNum;
- (unsigned int)columnNum;
@end

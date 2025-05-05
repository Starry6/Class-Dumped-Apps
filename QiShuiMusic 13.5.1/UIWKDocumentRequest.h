@interface UIWKDocumentRequest : NSObject
@property (nonatomic) q flags;
@property (nonatomic) q surroundingGranularity;
@property (nonatomic) q granularityCount;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} documentRect;
@property (nonatomic) <NSCopying> inputElementIdentifier;
- (void)dealloc;
- (void)setFlags:;
- (long long)flags;
- (id)inputElementIdentifier;
- (void)setInputElementIdentifier:;
- (long long)surroundingGranularity;
- (void)setSurroundingGranularity:;
- (long long)granularityCount;
- (void)setGranularityCount:;
- (id)documentRect;
- (void)setDocumentRect:;
@end

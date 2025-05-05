@interface NSDocumentDifferenceSize : NSObject
@property (nonatomic) q generationCount;
@property (nonatomic) q changeCount;
- (long long)changeCount;
- (long long)generationCount;
- (id)description;
- (void)setGenerationCount:;
- (void)setChangeCount:;
@end

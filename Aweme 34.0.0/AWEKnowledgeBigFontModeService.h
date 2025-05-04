@interface AWEKnowledgeBigFontModeService : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)bigFontModeOn;
- (id)albumSize:;
- (id)albumIconSize:;
- (double)albumOffset:;
- (unsigned long long)currentBigFontModeType;
- (double)albumOffsetToolForOffset:;
- (id)albumFontForFontSize:withForceMedium:;
- (id)albumFont:forceMedium:;
- (id)albumFont:;
- (id)currentFontForSizeArray:weight:;
- (double)currentSize:;
- (id)currentSquareIconSize:;
@end

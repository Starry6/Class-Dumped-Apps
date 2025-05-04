@interface AWEDTOTrimCropModel : MTLModel
@property (nonatomic) BOOL isTrimCropDraft;
@property (nonatomic) BOOL hasCropped;
@property (nonatomic) BOOL hasRotated;
@property (nonatomic) BOOL hasFlipped;
@property (nonatomic) BOOL hasTrimmed;
@property (nonatomic) q subPathType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isTrimCropDraft;
- (void)setIsTrimCropDraft:;
- (BOOL)hasCropped;
- (void)setHasCropped:;
- (BOOL)hasFlipped;
- (void)setHasFlipped:;
- (BOOL)hasTrimmed;
- (void)setHasTrimmed:;
- (long long)subPathType;
- (void)setSubPathType:;
- (BOOL)hasRotated;
- (void)setHasRotated:;
+ (id)JSONKeyPathsByPropertyKey;
@end

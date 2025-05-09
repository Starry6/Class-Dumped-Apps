@interface UIKBCacheToken : NSObject
@property (nonatomic) NSString string;
@property (nonatomic) {CGSize=dd} size;
@property (nonatomic) NSString name;
@property (nonatomic) double scale;
@property (nonatomic) NSInteger rowHint;
@property (nonatomic) NSInteger displayHint;
@property (nonatomic) q renderFlags;
@property (nonatomic) {?=b6b1b1b8b8b8} styling;
@property (nonatomic) NSInteger emptyFields;
@property (nonatomic) BOOL hasKey;
@property (nonatomic) NSSet transformationIdentifiers;
- (id)string;
- (id)stringForState:;
- (BOOL)hasKey;
- (void)setRenderFlags:;
- (void)setStyling:;
- (long long)renderFlags;
- (void)setDisplayHint:;
- (void)annotateWithInt:;
- (id)stringForComponentArray:additionalValues:;
- (int)rowHint;
- (void)setName:;
- (id)stringForConstruction:;
- (void)setScale:;
- (id)stringForRenderFlags:lightKeyboard:;
- (id)initWithName:;
- (void)setRowHint:;
- (void)annotateWithBool:;
- (id)initWithComponents:name:;
- (int)_writeEdgeInsets:toStr:maxLen:;
- (id)stringForKey:state:;
- (void).cxx_destruct;
- (void)setEmptyFields:;
- (int)emptyFields;
- (id)description;
- (id)styling;
- (id)transformationIdentifiers;
- (int)_writeString:toStr:maxLen:;
- (BOOL)isUsableForCacheToken:withRenderFlags:;
- (int)_writeNumber:toStr:;
- (id)name;
- (id)stringForSplitState:handBias:;
- (double)scale;
- (void)setTransformationIdentifiers:;
- (void)setSize:;
- (int)_writeArray:toStr:maxLen:;
- (void)resetAnnotations;
- (id)copyWithZone:;
- (int)displayHint;
- (id)size;
+ (id)tokenForKeyplane:;
+ (id)tokenForKey:style:;
+ (id)tokenForKey:style:displayInsets:;
+ (id)tokenForKeyMask:style:displayInsets:;
+ (id)tokenTemplateForKey:style:size:;
+ (id)tokenTemplateForKey:name:style:size:;
+ (id)tokenTemplateFilledForKey:style:size:;
@end

@interface SASItnAlignment : AceObject
@property (nonatomic) q firstPostItnCharPos;
@property (nonatomic) q firstPreItnTokenIndex;
@property (nonatomic) q lastPostItnCharPos;
@property (nonatomic) q lastPreItnTokenIndex;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (id)encodedClassName;
- (long long)firstPostItnCharPos;
- (void)setFirstPostItnCharPos:;
- (long long)firstPreItnTokenIndex;
- (void)setFirstPreItnTokenIndex:;
- (long long)lastPostItnCharPos;
- (void)setLastPostItnCharPos:;
- (long long)lastPreItnTokenIndex;
- (void)setLastPreItnTokenIndex:;
+ (id)itnAlignment;
+ (id)itnAlignmentWithDictionary:context:;
@end

@interface FPConflictLoser : NSObject
@property (nonatomic) NSFileProviderItemVersion version;
@property (nonatomic) NSString filename;
@property (nonatomic) NSDate modificationDate;
@property (nonatomic) NSPersonNameComponents lastEditorNameComponents;
@property (nonatomic) NSURL url;
- (id)filename;
- (id)url;
- (id)version;
- (id)modificationDate;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)lastEditorNameComponents;
- (id)initWithVersion:filename:url:modificationDate:lastEditorNameComponents:;
+ (BOOL)supportsSecureCoding;
@end

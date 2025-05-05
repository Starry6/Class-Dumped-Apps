@interface SWCollaborationShareOptions : NSObject
@property (nonatomic) NSArray optionsGroups;
@property (nonatomic) NSString summary;
- (id)initWithCoder:;
- (void)setSummary:;
- (void)encodeWithCoder:;
- (id)summary;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)optionsGroups;
- (id)initWithOptionsGroups:summary:;
- (id)initWithOptionsGroups:;
- (BOOL)isEqualToShareOptions:;
- (void)setOptionsGroups:;
+ (id)allocWithZone:;
+ (BOOL)supportsSecureCoding;
+ (id)shareOptionsWithOptionsGroups:summary:;
+ (id)shareOptionsWithOptionsGroups:;
@end

@interface CXSetGroupCallAction : CXCallAction
@property (nonatomic) NSUUID callUUIDToGroupWith;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)customDescription;
- (void)updateSanitizedCopy:withZone:;
- (id)callUUIDToGroupWith;
- (id)initWithCallUUID:callUUIDToGroupWith:;
- (void)setCallUUIDToGroupWith:;
+ (BOOL)supportsSecureCoding;
@end

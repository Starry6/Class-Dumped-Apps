@interface FAScreentimeSettingsObjectCache : NSObject
@property (nonatomic) NSDate date;
@property (nonatomic) @ introductionModel;
@property (nonatomic) NSNumber memberDSID;
- (id)initWithCoder:;
- (id)date;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)setDate:;
- (id)dataRepresentation;
- (id)memberDSID;
- (void)setMemberDSID:;
- (id)initWithIntroductionModel:date:dsid:;
- (id)introductionModel;
- (void)setIntroductionModel:;
+ (BOOL)supportsSecureCoding;
+ (Class)introductionModelClass;
+ (id)objectWithData:;
@end

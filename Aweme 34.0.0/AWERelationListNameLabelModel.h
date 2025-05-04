@interface AWERelationListNameLabelModel : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) NSAttributedString attributedName;
@property (nonatomic) UIImage verifiedIconImage;
@property (nonatomic) NSString relationTag;
@property (nonatomic) BOOL isEditable;
@property (nonatomic) BOOL isInDeactivateBufferPeriod;
@property (nonatomic) AWEConcernFansLabelModel fansLabelModel;
- (void)setRelationTag:;
- (id)relationTag;
- (BOOL)isInDeactivateBufferPeriod;
- (id)verifiedIconImage;
- (id)fansLabelModel;
- (void)setFansLabelModel:;
- (void)setVerifiedIconImage:;
- (void)setIsInDeactivateBufferPeriod:;
- (void)setIsEditable:;
- (BOOL)isEditable;
- (void).cxx_destruct;
- (void)setName:;
- (id)name;
- (id)attributedName;
- (void)setAttributedName:;
@end

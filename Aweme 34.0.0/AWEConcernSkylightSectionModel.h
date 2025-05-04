@interface AWEConcernSkylightSectionModel : NSObject
@property (nonatomic) Q cellType;
@property (nonatomic) NSArray cellModels;
- (void)setCellModels:;
- (id)cellModels;
- (void)updateCellModels:;
- (id)initWithCellType:cellModels:;
- (unsigned long long)cellType;
- (void)setCellType:;
- (void).cxx_destruct;
@end

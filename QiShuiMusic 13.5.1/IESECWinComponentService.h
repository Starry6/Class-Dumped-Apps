@interface IESECWinComponentService : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) IESECWinComponentResponse componentResponse;
@property (nonatomic) BOOL componentClosed;
- (BOOL)componentClosed;
- (id)componentResponse;
- (void)fetchDataWithActionParams:;
- (void)setComponentClosed:;
- (void)setComponentResponse:;
- (id)initWithContext:;
- (void).cxx_destruct;
- (void)fetchData;
@end

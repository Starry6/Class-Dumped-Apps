@interface ISPropertyListProvider : ISProtocolDataProvider
- (id)init;
- (BOOL)processDialogFromPropertyList:returningError:;
- (BOOL)processPropertyList:returningError:;
- (id)copyWithZone:;
@end
